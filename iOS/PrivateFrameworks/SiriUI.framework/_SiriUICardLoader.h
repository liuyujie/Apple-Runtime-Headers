//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFResourceLoader.h"

@class NSString;

@interface _SiriUICardLoader : NSObject <SFResourceLoader>
{
    _Bool _active;
    id <_SiriUICardLoaderDelegate> _delegate;
}

@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <_SiriUICardLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)loadCard:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_unregisterWithSearchFoundaton;
- (void)_registerWithSearchFoundation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

