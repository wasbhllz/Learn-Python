 // html
 <input type="file" accept="image/*" id="file">

// js
document.querySelector('#file').onchange = function () {
  canvasToDataURL(this.files[0])
    .then(res => console.log(res))
}
function canvasToDataURL (file) {
  return new Promise(resolve => {
    const img = document.createElement('img')
    img.src = URL.createObjectURL(file)
    img.onload = function () {
      const canvas = document.createElement('canvas')
      canvas.width = img.width
      canvas.height = img.height
      const ctx = canvas.getContext('2d')
      ctx.drawImage(img, 0, 0)
      resolve(canvas.toDataURL('image/png', 1))
    }
  })
}
