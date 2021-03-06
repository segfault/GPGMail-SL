#import <Cocoa/Cocoa.h>

#ifdef LEOPARD

@interface SafeObserver : NSObject
{
    unsigned int _retainCount;
    BOOL _inDealloc;
}

+ (void)initialize;
+ (void)lockSafeObservers;
+ (void)unlockSafeObservers;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)retain;
- (id)willDealloc;
- (void)release;
- (unsigned int)retainCount;

@end

#elif defined(TIGER)

@interface SafeObserver : NSObject
{
    unsigned int _retainCount;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)fp8;
+ (void)lockSafeObservers;
+ (void)unlockSafeObservers;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)retain;
- (id)willBeReleased;
- (void)release;
- (unsigned int)retainCount;

@end

#endif
