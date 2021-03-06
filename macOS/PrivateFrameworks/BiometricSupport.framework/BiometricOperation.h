//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BiometricKitXPCExportedClientObject, NSDictionary;

@interface BiometricOperation : NSObject
{
    int _operationType;
    int _operationStatus;
    long long _operationPriority;
    NSDictionary *_params;
    BiometricKitXPCExportedClientObject *_client;
    unsigned long long _absoluteTime;
}

@property(nonatomic) unsigned long long absoluteTime; // @synthesize absoluteTime=_absoluteTime;
@property(nonatomic) int operationStatus; // @synthesize operationStatus=_operationStatus;
@property(retain, nonatomic) BiometricKitXPCExportedClientObject *client; // @synthesize client=_client;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) long long operationPriority; // @synthesize operationPriority=_operationPriority;
@property(nonatomic) int operationType; // @synthesize operationType=_operationType;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

