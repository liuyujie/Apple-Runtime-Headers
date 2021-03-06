//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKRouteContextObserver.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKRouteContextObserverThunk : NSObject <VKRouteContextObserver>
{
    struct LabelTransitSupport *_transitSupport;
    struct _retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _routeContext;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)routeContextStateDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithRouteContext:(id)arg1 transitSupport:(struct LabelTransitSupport *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

