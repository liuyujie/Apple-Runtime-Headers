//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKPredicateValidatorInstance.h>

__attribute__((visibility("hidden")))
@interface CKComparisonOperatorValidator : CKPredicateValidatorInstance
{
    unsigned int _operatorType;
}

@property(nonatomic) unsigned int operatorType; // @synthesize operatorType=_operatorType;
- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithOperatorType:(unsigned int)arg1;

@end

