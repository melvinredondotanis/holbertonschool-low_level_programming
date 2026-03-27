import subprocess
import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart

def execute_command():
    # Command to find files with SUID bit set
    command = "find / -type f -perm -4000 2>/dev/null"
    result = subprocess.run(command, shell=True, capture_output=True, text=True)
    return result.stdout

def send_email(report, recipient_email):
    sender_email = "9534@holbertonstudents.com"
    sender_password = "ksubhijgicokabix"

    msg = MIMEMultipart()
    msg['From'] = sender_email
    msg['To'] = recipient_email
    msg['Subject'] = "SUID Files Report"

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
    report = execute_command()
    recipient_email = "9534@holbertonstudents.com"
    send_email(report, recipient_email)
