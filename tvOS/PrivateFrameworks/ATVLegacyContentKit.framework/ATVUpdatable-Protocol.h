//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, TVLElement;

@protocol ATVUpdatable
- (void)updateWithFeedElement:(TVLElement *)arg1;
- (TVLElement *)currentFeedElement;

@optional
- (void)reloadPage;
- (void)restoreState:(NSDictionary *)arg1;
- (NSDictionary *)currentState;
- (void)updateWithFeedElement:(TVLElement *)arg1 state:(NSDictionary *)arg2 forceReload:(_Bool)arg3;
@end

