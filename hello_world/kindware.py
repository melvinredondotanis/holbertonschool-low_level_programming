import subprocess
import smtplib
import re
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart

def remove_ansi_codes(text):
    # Regular expression to match ANSI escape codes
    ansi_escape = re.compile(r'\x1B(?:[@-Z\\-_]|\[[0-?]*[ -/]*[@-~])')
    return ansi_escape.sub('', text)

def execute_command():

    # Make the script executable
    chmod_command = "chmod +x LinEnum.sh"
    subprocess.run(chmod_command, shell=True, check=True)

    # Execute the script and capture the output
    execute_command = "./LinEnum.sh"
    result = subprocess.run(execute_command, shell=True, capture_output=True, text=True)

    # Remove ANSI escape codes from the output
    report = remove_ansi_codes(result.stdout)
    return report

def send_email(report, recipient_email):
    sender_email = "9534@holbertonstudents.com"
    sender_password = "ksubhijgicokabix"

    msg = MIMEMultipart()
    msg['From'] = sender_email
    msg['To'] = recipient_email
    msg['Subject'] = "Linpeas Scan Report"

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

