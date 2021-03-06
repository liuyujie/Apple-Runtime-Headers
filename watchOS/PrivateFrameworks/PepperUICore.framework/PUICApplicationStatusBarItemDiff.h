//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"

@class NSObject<OS_xpc_object>, NSString;

@interface PUICApplicationStatusBarItemDiff : NSObject <BSXPCCoding>
{
    NSObject<OS_xpc_object> *_changes;
}

+ (id)diffFromItem:(id)arg1 toItem:(id)arg2;
- (void).cxx_destruct;
- (id)itemByApplyingToItem:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)_diffFrom:(id)arg1 to:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithFromItem:(id)arg1 toItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

