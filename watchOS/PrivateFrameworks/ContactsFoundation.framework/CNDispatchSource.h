//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNCancelable.h"

@class NSObject<OS_dispatch_source>, NSString;

@interface CNDispatchSource : NSObject <CNCancelable>
{
    NSObject<OS_dispatch_source> *_source;
}

- (void)cancel;
- (id)source;
- (void)dealloc;
- (id)initWithSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

