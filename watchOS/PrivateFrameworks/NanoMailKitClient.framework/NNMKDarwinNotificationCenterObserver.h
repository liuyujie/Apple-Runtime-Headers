//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NNMKDarwinNotificationCenterObserver : NSObject
{
    NSObject *_observerObject;
    NSString *_notificationName;
    SEL _selector;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(nonatomic) __weak NSObject *observerObject; // @synthesize observerObject=_observerObject;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end

