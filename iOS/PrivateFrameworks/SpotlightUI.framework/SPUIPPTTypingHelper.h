//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPUISearchViewController;

@interface SPUIPPTTypingHelper : NSObject
{
    double _timeSinceLastFire;
    SPUISearchViewController *_searchViewController;
    NSString *_queryString;
    NSString *_currentQueryString;
    CDUnknownBlockType _completion;
}

@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain) NSString *currentQueryString; // @synthesize currentQueryString=_currentQueryString;
@property(retain) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain) SPUISearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property double timeSinceLastFire; // @synthesize timeSinceLastFire=_timeSinceLastFire;
- (void).cxx_destruct;
- (void)fire:(id)arg1;
- (id)initWithString:(id)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

