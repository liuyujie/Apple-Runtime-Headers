//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ARTimeKeyedList : NSObject
{
    unsigned long long _maxSize;
    NSMutableArray *_times;
    NSMutableArray *_objects;
}

- (void).cxx_destruct;
- (void)clear;
- (void)appendObject:(id)arg1 forTime:(double)arg2;
- (id)nearestObjectForTime:(double)arg1;
- (unsigned long long)insertionIndexForTime:(id)arg1;
- (id)init;
- (id)initWithMaxSize:(unsigned long long)arg1;

@end
