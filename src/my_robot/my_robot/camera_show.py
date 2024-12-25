import cv2

# Membuka stream dari kamera (gunakan '0' untuk kamera internal atau IP kamera)
cap = cv2.VideoCapture(0)

while True:
    # Membaca frame dari kamera
    ret, frame = cap.read()

    if not ret:
        print("Tidak dapat menangkap gambar")
        break

    # Menampilkan gambar
    cv2.imshow("Camera", frame)

    # Menunggu input kunci untuk keluar (misalnya tekan 'q' untuk keluar)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Menutup kamera dan jendela
cap.release()
cv2.destroyAllWindows()
