//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NFLocking.h"

@class NFMutexLock;

@interface FCMTWriterMutexLock : NSObject <NFLocking>
{
    NFMutexLock *_mutex;
}

@property(retain, nonatomic) NFMutexLock *mutex; // @synthesize mutex=_mutex;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)performWriteSync:(CDUnknownBlockType)arg1;
- (void)performReadSync:(CDUnknownBlockType)arg1;
- (id)init;

@end
