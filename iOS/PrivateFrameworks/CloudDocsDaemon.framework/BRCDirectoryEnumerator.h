//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRCDirectoryEnumerator : NSObject
{
    NSMutableArray *_stack;
    _Bool _recursive;
    int *_err;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initForEnumeratingBelow:(id)arg1 recursive:(_Bool)arg2 error:(int *)arg3;

@end
