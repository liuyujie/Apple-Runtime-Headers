//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationNameRegistration : _CFXNotificationRegistrationContainer
{
    struct __CFString *_name;
}

+ (Class)childClass;
+ (const CDStruct_459b2a3d *)keyCallbacks;
@property(readonly) struct __CFString *name; // @synthesize name=_name;
- (_Bool)enumerate:(CDUnknownBlockType)arg1;
- (id)acquireObject:(void *)arg1;
- (void)match:(void *)arg1 observer:(void *)arg2 matching:(CDStruct_e7b0119b *)arg3;
- (void)find:(void *)arg1 observer:(void *)arg2 matching:(CDStruct_e7b0119b *)arg3;
- (void *)key;
- (void)dealloc;
- (id)initWithName:(struct __CFString *)arg1 options:(unsigned long)arg2 parent:(id)arg3;

@end

