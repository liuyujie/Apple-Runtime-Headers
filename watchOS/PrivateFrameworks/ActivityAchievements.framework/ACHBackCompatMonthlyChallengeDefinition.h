//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSExpression, NSString;

@interface ACHBackCompatMonthlyChallengeDefinition : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_typeString;
    NSExpression *_goalExpression;
}

+ (_Bool)supportsSecureCoding;
+ (id)definitionFromData:(id)arg1;
@property(readonly, nonatomic) NSExpression *goalExpression; // @synthesize goalExpression=_goalExpression;
@property(readonly, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_goalExpressionValue;
- (id)_dateComponentsFromIdentifier;
- (unsigned int)_monthlyChallengeTypeFromTypeString;
- (id)template;

@end

