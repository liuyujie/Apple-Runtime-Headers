//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSPReplicaMergeOptions.h"

@class NSString;

@interface MSPFavoritesReplicaMergeOptions : NSObject <MSPReplicaMergeOptions>
{
    BOOL _deserializationAllowed;
}

@property(readonly, getter=isDeserializationAllowed) BOOL deserializationAllowed; // @synthesize deserializationAllowed=_deserializationAllowed;
- (id)initWithDeserializationAllowed:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
