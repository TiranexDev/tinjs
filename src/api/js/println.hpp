#include <JavaScriptCore/JavaScript.h>

namespace println {
    JSValueRef printlnCallback(JSContextRef ctx, JSObjectRef function, JSObjectRef thisObject, size_t argumentCount,
                               const JSValueRef arguments[], JSValueRef *exception);

    void printObject(JSContextRef ctx, JSObjectRef object, bool color);

    void rawPrint(JSContextRef ctx, JSValueRef value, JSType type, bool colorString);
}