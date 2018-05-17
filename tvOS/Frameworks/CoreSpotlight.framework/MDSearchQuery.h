//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSPredicate;

@interface MDSearchQuery : NSObject
{
    NSPredicate *_predicate;
    NSDictionary *_options;
    unsigned long long _status;
    id <MDSearchQueryDelegate> _delegate;
}

@property __weak id <MDSearchQueryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) unsigned long long status; // @synthesize status=_status;
@property(readonly, copy) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (id)initWithPredicate:(id)arg1 options:(id)arg2;
- (id)initWithQueryString:(id)arg1 options:(id)arg2;
- (id)init;

@end
