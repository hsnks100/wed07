require 'kramdown'
require 'pdfkit'
# PDFKit.new takes the HTML and any options for wkhtmltopdf
# run `wkhtmltopdf --extended-help` for a full list of options

# PDFKit.new can optionally accept a URL or a File.
# Stylesheets can not be added when source is provided as a URL of File.
#kit = PDFKit.new('http://google.com').to_file
#kit = PDFKit.new(File.new('/path/to/html'))
PDFKit.new('http://codingdosa.com/wed07/post/2016-09-22-%EC%8B%A4%ED%97%98%EC%B2%AB%EB%B2%88%EC%A7%B8%EB%B3%B4%EA%B3%A0%EC%84%9C.html').to_file('zzz.pdf')

