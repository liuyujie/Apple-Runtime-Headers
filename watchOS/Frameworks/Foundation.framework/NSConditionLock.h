//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSLocking.h"

@class NSString;

@interface NSConditionLock : NSObject <NSLocking>
{
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(copy) NSString *name;
- (id)description;
- (void)unlockWithCondition:(int)arg1;
- (void)unlock;
- (_Bool)tryLockWhenCondition:(int)arg1;
- (_Bool)tryLock;
- (_Bool)lockWhenCondition:(int)arg1 beforeDate:(id)arg2;
- (void)lockWhenCondition:(int)arg1;
- (_Bool)lockBeforeDate:(id)arg1;
- (void)lock;
@property(readonly) int condition;
- (void)dealloc;
- (id)initWithCondition:(int)arg1;
- (id)init;

@end

