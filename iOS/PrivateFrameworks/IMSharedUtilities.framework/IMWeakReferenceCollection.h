//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IMWeakReferenceCollection : NSObject
{
    NSMutableArray *_list;
}

- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (id)init;

@end

