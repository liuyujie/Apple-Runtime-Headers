//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLStoreRequestContext.h>

__attribute__((visibility("hidden")))
@interface NSSQLBlockRequestContext : NSSQLStoreRequestContext
{
    CDUnknownBlockType _workBlock;
}

- (void)executeRequestCore:(id *)arg1;
- (BOOL)isWritingRequest;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1 context:(id)arg2 sqlCore:(id)arg3;

@end

