# contenedor ubuntu bryan v.0.1
FROM ubuntu:20.04
RUN apt-get update -y && apt-get install apache2 -y && apt-get install nginx 4 -y && apt-get install terminator -y
ENTRYPOINT echo "primer contenedor" 