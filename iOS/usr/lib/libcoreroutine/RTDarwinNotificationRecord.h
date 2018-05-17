//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface RTDarwinNotificationRecord : NSObject
{
    NSString *_notificationName;
    NSNumber *_registrationToken;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSNumber *registrationToken; // @synthesize registrationToken=_registrationToken;
@property(copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void).cxx_destruct;
- (id)initWithNotificationName:(id)arg1 registrationToken:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;

@end
