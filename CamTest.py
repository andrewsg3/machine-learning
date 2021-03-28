import cv2

cap = cv2.VideoCapture(0)


while True:
    ret, mat = cap.read()
    cv2.imshow("Cap",mat)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()