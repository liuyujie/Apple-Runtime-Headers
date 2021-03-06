//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, NSArray, NSError;

@interface FCCoverArticlesOperation : FCOperation
{
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    NSArray *_headlines;
    NSArray *_supplementalHeadlines;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property(copy) NSArray *supplementalHeadlines; // @synthesize supplementalHeadlines=_supplementalHeadlines;
@property(copy) NSArray *headlines; // @synthesize headlines=_headlines;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)_supplementalCoverArticleListIDs;
- (void)performOperation;
- (_Bool)validateOperation;

@end

