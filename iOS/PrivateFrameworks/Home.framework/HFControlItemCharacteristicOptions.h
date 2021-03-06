//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NAIdentifiable.h"

@class NSDictionary, NSSet, NSString;

@interface HFControlItemCharacteristicOptions : NSObject <NAIdentifiable>
{
    NSDictionary *_characteristicTypesByUsage;
}

+ (id)na_identity;
+ (id)optionsWithReadWriteCharacteristicTypes:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *characteristicTypesByUsage; // @synthesize characteristicTypesByUsage=_characteristicTypesByUsage;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_optionsByReducingWithOptions:(id)arg1 reducer:(CDUnknownBlockType)arg2;
- (id)optionsByIntersectingWithOptions:(id)arg1;
- (id)optionsByAddingCharacteristicOptions:(id)arg1;
- (id)optionsByAddingCharacteristicTypes:(id)arg1 forUsage:(unsigned long long)arg2;
- (id)characteristicTypesForUsage:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)_characteristicTypesForUsagesPassingTest:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSSet *allRequiredCharacteristicTypes;
@property(readonly, copy, nonatomic) NSSet *allCharacteristicTypes;
- (id)initWithCharacteristicTypesByUsage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

