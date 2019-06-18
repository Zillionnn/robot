import win32api
import win32con
from time import sleep

# win32api.keybd_event(17,0,0,0)
KEY = {
    '0':48,
    '1':49,
    '2':50,
    '3':51,
    '4':52,
    '5':53,
    '6':54,
    '7':55,
    '8':56,
    '9':57,

    'a': 65,
    'b': 66,
    'c': 67,
    'd':68,
    'e':69,
    'f':70,
    'g':71,
    'h':72,
    'i':73,
    'j':74,
    'k':75,
    'l':76,
    'm':77,
    'n':78,
    'o':79,
    'p':80,
    'q':81,
    'r':82,
    's':83,
    't':84,
    'u':85,
    'v':86,
    'w':87,
    'x':88,
    'y':89,
    'z':90,
    
    '*': 106,
    '+':107,
    'enter': 108,
    '-': 109,
    '.':110,
    '/':111,
    'f1':112,
    'f2':113,
    'f3':114,
    'f4':115,
    'f5':116,
    'f7':118,
    'f8':119,
    'f9':120,
    'f10':121,
    'f11':122,
    'f12': 123,
    'backspace': 8,
    'tab': 9,
    'clear': 12,
    'shift': 16,
    'control': 17,
    'alt': 18,
    'capslock': 20,
    'esc': 27,
    'space': 32,
    'pageup': 33,
    'pagedown': 34,
    'end': 35,
    'home': 36,
    'left':37,
    'up':38,    
    'right': 39,
    'down': 40,
    'insert': 45,
    'delete': 46,
    'help': 47,
    'numlock':144
}

PRESS = 1
def tap(key):
    code = KEY[key]
    win32api.keybd_event(code,0,0,0)

def press(key):
    PRESS = 1
    code = KEY[key]
    while PRESS:
        tap(key)

def release(key):
    PRESS = 0

def moveMouse(x,y):
    win32api.SetCursorPos([x,y])

def mouseClick():
    tmp = win32api.GetCursorPos()
    # print(tmp)
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTDOWN,tmp[0], tmp[1]) 
    sleep(0.005)
    win32api.mouse_event(win32con.MOUSEEVENTF_LEFTUP,tmp[0], tmp[1])