//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface BBGuaranteedOnceCache : NSObject
{
    NSMapTable *_guaranteedCache;
    NSMapTable *_bestEffortCache;
}

- (void).cxx_destruct;
- (_Bool)attemptToGuaranteeObjectUsingKey:(id)arg1;
- (void)removeObjectUsingKey:(id)arg1;
- (id)objectUsingKeyRemovingGuarantee:(id)arg1;
- (void)cacheObject:(id)arg1 usingKey:(id)arg2;
- (id)init;

@end
