//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoTimeJumpObserving.h"

@class NSString;

@interface SVVideoTimeJumpObserver : NSObject <SVVideoTimeJumpObserving>
{
    CDUnknownBlockType jumpBlock;
    id <SVPlayerItemObserving> _itemObserver;
    id <SVVideoTimeProviding> _timeProvider;
}

@property(readonly, nonatomic) id <SVVideoTimeProviding> timeProvider; // @synthesize timeProvider=_timeProvider;
@property(readonly, nonatomic) id <SVPlayerItemObserving> itemObserver; // @synthesize itemObserver=_itemObserver;
@property(copy, nonatomic, setter=onJump:) CDUnknownBlockType jumpBlock; // @synthesize jumpBlock;
- (void).cxx_destruct;
- (void)jumped:(id)arg1;
- (id)initWithItemObserver:(id)arg1 timeProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

