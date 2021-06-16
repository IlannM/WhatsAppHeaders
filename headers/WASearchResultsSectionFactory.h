//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WASearchResultsSectionFactory : NSObject
{
    NSMutableDictionary *_titlesForSearchResultTypes;
}

+ (id)newTimeBasedMediaMessagessResultSection;
+ (id)newTimeBasedMediaMessagessResultSectionFollowingSection:(id)arg1;
- (void).cxx_destruct;
- (id)newAuthorsSection;
- (id)newChatResultSection;
- (id)newContactSection;
- (id)newGroupResultSection;
- (id)newMediaCountResultsSection;
- (id)newMessagesResultSection;
- (id)newOutOfNetworkContactsResultSection;
- (id)newResultSectionForIndexUnreadyMessage;
- (id)newStarredMessagesResultSection;
- (id)newStashedChatResultSection;
- (id)newStatusResultSectionWithSessions:(id)arg1 sectionType:(unsigned long long)arg2;
- (id)newStatusResultsSectionForType:(unsigned long long)arg1;
- (void)setLocalizedTitle:(id)arg1 forSearchResultsType:(unsigned long long)arg2;
- (id)titleForSearchResultsType:(unsigned long long)arg1;

@end
