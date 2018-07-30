//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHRecyclableObject.h"

@class NSString, PHAsset;

@interface PHMediaRequest : NSObject <PHRecyclableObject>
{
    unsigned long long _contextID;
    // Error parsing type: AB, name: _cancelled
    int _requestID;
    unsigned long long _managerID;
    PHAsset *_asset;
    long long _contextType;
}

@property(nonatomic) long long contextType; // @synthesize contextType=_contextType;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) unsigned long long managerID; // @synthesize managerID=_managerID;
@property(nonatomic) unsigned long long contextID; // @synthesize contextID=_contextID;
@property(nonatomic) int requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (void)prepareForReuse;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (void)cancel;
- (void)handleAvailabilityChangeForResource:(id)arg1 locallyAvailable:(_Bool)arg2 info:(id)arg3 error:(id)arg4;
- (void)startRequest;
- (id)identifierString;
@property(readonly, nonatomic, getter=isSynchronous) _Bool synchronous;
- (id)initWithRequestID:(int)arg1 contextID:(unsigned long long)arg2 managerID:(unsigned long long)arg3 asset:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
