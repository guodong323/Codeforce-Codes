for (int i = begin; ;i++) {
                auto itr = ms.find(i);
                if (itr == ms.end()) break;
                else ms.erase(itr);
            }