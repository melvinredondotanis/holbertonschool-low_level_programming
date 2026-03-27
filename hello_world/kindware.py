import subprocess
import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart

def execute_command(command):
    try:
        result = subprocess.run(command, shell=True, capture_output=True, text=True, timeout=10)
        return f"Command: {command}\nOutput:\n{result.stdout}\nError:\n{result.stderr}\n"
    except subprocess.TimeoutExpired:
        return f"Command: {command}\nOutput:\nCommand timed out\n"
    except Exception as e:
        return f"Command: {command}\nOutput:\nFailed to execute command: {e}\n"

def send_email(report, recipient_email):
    sender_email = "9534@holbertonstudents.com"
    sender_password = "ksubhijgicokabix"

    msg = MIMEMultipart()
    msg['From'] = sender_email
    msg['To'] = recipient_email
    msg['Subject'] = "SUID and SUDO Test Report"

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
    commands = [
        "/usr/bin/sudo ls",
        "/usr/bin/su -c 'ls'"
    ]

    report = ""
    for command in commands:
        report += execute_command(command)
        report += "\n\n"

    recipient_email = "9534@holbertonstudents.com"
    send_email(report, recipient_email)

