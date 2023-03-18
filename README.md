# Archivo .gitignore

_Es un archivo de texto que se crea manualmente donde especificamos que archivos o directorios completos queremos que Git ignore._

## ¿Por qué es conveniente incluirlo?

_No todos los archivos que agreguemos a un proyecto deberían guardarse en un repositorio ya que se podría estar revelando información como contraseñas o cuando te estas conectando a una base de datos. También en nuestro repositorio quizás debido a la herramienta que utilizamos, se generan archivos temporales, archivos logs, o similares que no son relevantes y que su información no nos aporta nada._

## ¿Cuándo se debe hacer?

_Cuando veamos que hay archivos como por ejemplo contraseñas que son **necesario ignorar**, deberemos editar y confirmar manualmente el archivo. gitignore._

## ¿Cómo configuraría el archivo .gitignore?

_Debemos crear un archivo que se llama ".gitignore" en la carpeta raíz de nuestro proyecto, dentro de ese archivo colocaremos texto plano, con los nombres de todas las carpetas y archivos que queremos que Git simplemente ignore._

