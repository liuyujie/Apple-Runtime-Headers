//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLSafeMutableDictionary;

@interface CSLSPrivilegedBackgroundPriorityStateCache : NSObject
{
    CSLSafeMutableDictionary *_stateCache;
}

@property(retain, nonatomic) CSLSafeMutableDictionary *stateCache; // @synthesize stateCache=_stateCache;
- (void).cxx_destruct;
- (void)enumeratePrivilegedClients:(CDUnknownBlockType)arg1;
- (void)addPrivilegedClient:(id)arg1 priority:(unsigned int)arg2 leeway:(double)arg3 usesBudget:(_Bool)arg4;
- (void)addPrivilegedClient:(id)arg1 priority:(unsigned int)arg2 leeway:(double)arg3 usesBudget:(_Bool)arg4 returnToPrimaryUIInterval:(double)arg5;
- (id)init;

@end

