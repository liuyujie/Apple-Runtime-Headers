//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFMutualExclusionAssertion : NSObject
{
    _Bool _inCriticalSection;
}

- (void)performCriticalSection:(CDUnknownBlockType)arg1;
- (void)leaveCriticalSection;
- (void)enterCriticalSection;

@end

