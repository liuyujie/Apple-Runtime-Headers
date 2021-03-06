//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDate, NSDictionary, NSString, PKVerificationChannel;

@interface PKVerificationRequestRecord : NSObject <NSSecureCoding>
{
    NSString *_currentStepIdentifier;
    NSString *_previousStepIdentifier;
    int _verificationStatus;
    NSString *_passUniqueID;
    NSDate *_date;
    PKVerificationChannel *_channel;
    NSArray *_allChannels;
    NSDictionary *_requiredFieldData;
}

+ (_Bool)supportsSecureCoding;
+ (id)verificationRequestRecordForPass:(id)arg1;
@property(copy, nonatomic) NSDictionary *requiredFieldData; // @synthesize requiredFieldData=_requiredFieldData;
@property(copy, nonatomic) NSArray *allChannels; // @synthesize allChannels=_allChannels;
@property(copy, nonatomic) PKVerificationChannel *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *passUniqueID; // @synthesize passUniqueID=_passUniqueID;
@property(nonatomic) int verificationStatus; // @synthesize verificationStatus=_verificationStatus;
@property(copy, nonatomic) NSString *previousStepIdentifier; // @synthesize previousStepIdentifier=_previousStepIdentifier;
@property(copy, nonatomic) NSString *currentStepIdentifier; // @synthesize currentStepIdentifier=_currentStepIdentifier;
- (void).cxx_destruct;
- (id)requiredVerificationFields;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

