//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable;

@interface PLManagedObjectContextList : NSObject
{
    struct os_unfair_lock_s _lock;
    NSHashTable *_contexts;
}

- (void).cxx_destruct;
- (id)allContexts;
- (id)allContextsNotIdenticalTo:(id)arg1;
- (void)addContext:(id)arg1;
- (id)init;

@end
