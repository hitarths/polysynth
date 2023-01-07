FROM openstax/python3-base
# RUN apt-get update && apt full-upgrade -y && apt install libcairo2-dev -y
COPY . .
RUN chmod 755 external-tools/racket-8.7-x86_64-linux-cs.sh && echo y | sh external-tools/racket-8.7-x86_64-linux-cs.sh
RUN apt-get install default-jre -y
RUN  raco pkg install --auto rosette
RUN pip install lark==1.1.2 z3-solver==4.11.2.0 sympy==1.11.1
ENTRYPOINT ["python3", "/Code/synthesizer.py"]
# ENTRYPOINT ["/bin/bash"]