//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKeyboardSliceStore : NSObject
{
    NSMutableDictionary *_store;
}

+ (void)archiveSet:(id)arg1;
+ (id)sliceSetIDForKeyplaneName:(id)arg1 type:(int)arg2 orientation:(int)arg3;
+ (id)sliceSetForID:(id)arg1;
+ (id)sharedStore;
- (void).cxx_destruct;
- (id)sliceSetForID:(id)arg1;
- (void)addSet:(id)arg1;
- (id)init;

@end

