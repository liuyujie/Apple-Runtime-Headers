//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTPowerAssertion, NSString;

@interface MTAgentNotification : NSObject
{
    int _type;
    NSString *_name;
    MTPowerAssertion *_powerAssertion;
}

+ (id)notificationWithType:(int)arg1 name:(id)arg2 powerAssertionTimeout:(double)arg3;
+ (id)notificationWithType:(int)arg1 name:(id)arg2;
@property(retain, nonatomic) MTPowerAssertion *powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dealloc;
- (void)releaseAssertion;
- (id)initWithType:(int)arg1 name:(id)arg2 powerAssertionTimeout:(double)arg3;

@end

