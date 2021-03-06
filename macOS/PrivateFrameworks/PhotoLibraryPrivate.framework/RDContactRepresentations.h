//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface RDContactRepresentations : NSObject
{
    NSDictionary *_contactMatchingDictionary;
    NSString *_contactIdentifier;
}

@property(retain, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(retain, nonatomic) NSDictionary *contactMatchingDictionary; // @synthesize contactMatchingDictionary=_contactMatchingDictionary;
- (void).cxx_destruct;
- (id)_matchingDictionaryFromContact:(id)arg1;
- (id)_contactIdentifierFromMatchingDictionary:(id)arg1;
- (id)description;
- (id)initWithContact:(id)arg1;
- (id)initWithContactMatchingDictionary:(id)arg1;
- (id)init;

@end

