//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXComponentViewPostProcessorManager.h"

@class NSMutableArray, NSString;

@interface SXComponentViewPostProcessorManager : NSObject <SXComponentViewPostProcessorManager>
{
    NSMutableArray *_processors;
}

@property(readonly, nonatomic) NSMutableArray *processors; // @synthesize processors=_processors;
- (void).cxx_destruct;
- (void)removeProcessor:(id)arg1;
- (void)addProcessor:(id)arg1;
- (void)processComponent:(id)arg1 view:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
