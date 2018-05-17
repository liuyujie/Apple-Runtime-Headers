//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol _CPSearchSuggestionForFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasFbr;
@property(copy, nonatomic) NSString *fbr;
@property(readonly, nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) _Bool hasScore;
@property(nonatomic) double score;
@property(readonly, nonatomic) _Bool hasQuery;
@property(copy, nonatomic) NSString *query;
@property(readonly, nonatomic) _Bool hasSuggestion;
@property(copy, nonatomic) NSString *suggestion;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
