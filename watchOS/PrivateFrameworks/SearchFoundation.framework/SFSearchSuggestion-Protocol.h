//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFSearchSuggestion <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *scopedSearchApplicationBundleIdentifier;
@property(copy, nonatomic) NSString *fbr;
@property(nonatomic) _Bool previouslyEngaged;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(copy, nonatomic) NSString *topicIdentifier;
@property(copy, nonatomic) NSArray *duplicateSuggestions;
@property(nonatomic) int type;
@property(nonatomic) float score;
@property(copy, nonatomic) NSString *query;
@property(copy, nonatomic) NSString *suggestion;
@property(copy, nonatomic) NSString *identifier;
@end

