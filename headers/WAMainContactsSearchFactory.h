//
//     Generated by classdumpios 1.0.2 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Core/WAContactsSearchFactory.h>

@interface WAMainContactsSearchFactory : WAContactsSearchFactory
{
}

- (id)newContactsLoaderForChatSession:(id)arg1;
- (id)newMentionsSelectorViewWithFrame:(struct CGRect)arg1 chatSession:(id)arg2 roundCorners:(_Bool)arg3;
- (id)newSearchControllerWithContactsStorage:(id)arg1 contactsLoader:(id)arg2 delegate:(id)arg3;

@end

