//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface _SPBucketSet : NSObject
{
    struct __CFDictionary *_members;
    NSObject<OS_dispatch_queue> *_queue;
    int _count;
}

@property int count; // @synthesize count=_count;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)decay:(int)arg1;
- (void)addValue:(int)arg1 forKey:(id)arg2;
- (void)removeValueForKey:(id)arg1;
- (int)valueForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end
